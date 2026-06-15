// fichero 33085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33085;

Registro33085 crear_registro33085(int id) {
    Registro33085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
