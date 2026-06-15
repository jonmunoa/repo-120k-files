// fichero 36485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36485;

Registro36485 crear_registro36485(int id) {
    Registro36485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
