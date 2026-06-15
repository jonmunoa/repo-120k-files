// fichero 9377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9377;

Registro9377 crear_registro9377(int id) {
    Registro9377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
