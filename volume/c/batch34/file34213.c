// fichero 34213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34213;

Registro34213 crear_registro34213(int id) {
    Registro34213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
