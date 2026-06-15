// fichero 20533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20533;

Registro20533 crear_registro20533(int id) {
    Registro20533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
