// fichero 9245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9245;

Registro9245 crear_registro9245(int id) {
    Registro9245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
