// fichero 44929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44929;

Registro44929 crear_registro44929(int id) {
    Registro44929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
