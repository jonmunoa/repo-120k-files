// fichero 19841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19841;

Registro19841 crear_registro19841(int id) {
    Registro19841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
