// fichero 21765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21765;

Registro21765 crear_registro21765(int id) {
    Registro21765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
