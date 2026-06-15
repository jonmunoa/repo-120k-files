// fichero 12673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12673;

Registro12673 crear_registro12673(int id) {
    Registro12673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
