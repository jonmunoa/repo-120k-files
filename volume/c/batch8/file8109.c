// fichero 8109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8109;

Registro8109 crear_registro8109(int id) {
    Registro8109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
