// fichero 9069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9069;

Registro9069 crear_registro9069(int id) {
    Registro9069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
