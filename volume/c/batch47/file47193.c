// fichero 47193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47193;

Registro47193 crear_registro47193(int id) {
    Registro47193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
