// fichero 19905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19905;

Registro19905 crear_registro19905(int id) {
    Registro19905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
