// fichero 9569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9569;

Registro9569 crear_registro9569(int id) {
    Registro9569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
