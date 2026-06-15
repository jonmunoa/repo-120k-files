// fichero 12169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12169;

Registro12169 crear_registro12169(int id) {
    Registro12169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
