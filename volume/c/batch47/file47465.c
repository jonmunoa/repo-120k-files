// fichero 47465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47465;

Registro47465 crear_registro47465(int id) {
    Registro47465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
