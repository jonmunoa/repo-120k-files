// fichero 12157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12157;

Registro12157 crear_registro12157(int id) {
    Registro12157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
