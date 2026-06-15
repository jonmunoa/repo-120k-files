// fichero 153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro153;

Registro153 crear_registro153(int id) {
    Registro153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
