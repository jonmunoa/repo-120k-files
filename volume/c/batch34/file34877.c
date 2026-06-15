// fichero 34877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34877;

Registro34877 crear_registro34877(int id) {
    Registro34877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
