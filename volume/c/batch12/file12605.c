// fichero 12605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12605;

Registro12605 crear_registro12605(int id) {
    Registro12605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
