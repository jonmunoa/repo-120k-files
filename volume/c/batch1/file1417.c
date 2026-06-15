// fichero 1417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1417;

Registro1417 crear_registro1417(int id) {
    Registro1417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
