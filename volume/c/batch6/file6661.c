// fichero 6661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6661;

Registro6661 crear_registro6661(int id) {
    Registro6661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
