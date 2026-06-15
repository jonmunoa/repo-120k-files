// fichero 12173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12173;

Registro12173 crear_registro12173(int id) {
    Registro12173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
