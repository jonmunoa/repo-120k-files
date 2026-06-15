// fichero 9105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9105;

Registro9105 crear_registro9105(int id) {
    Registro9105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
