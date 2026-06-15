// fichero 8793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8793;

Registro8793 crear_registro8793(int id) {
    Registro8793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
