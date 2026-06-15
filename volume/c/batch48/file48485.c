// fichero 48485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48485;

Registro48485 crear_registro48485(int id) {
    Registro48485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
