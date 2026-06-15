// fichero 34485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34485;

Registro34485 crear_registro34485(int id) {
    Registro34485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
