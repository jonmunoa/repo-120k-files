// fichero 30485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30485;

Registro30485 crear_registro30485(int id) {
    Registro30485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
