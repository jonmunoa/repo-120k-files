// fichero 8905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8905;

Registro8905 crear_registro8905(int id) {
    Registro8905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
