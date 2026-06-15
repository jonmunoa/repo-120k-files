// fichero 21533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21533;

Registro21533 crear_registro21533(int id) {
    Registro21533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
