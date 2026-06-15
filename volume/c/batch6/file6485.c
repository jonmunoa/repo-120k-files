// fichero 6485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6485;

Registro6485 crear_registro6485(int id) {
    Registro6485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
