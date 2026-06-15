// fichero 40173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40173;

Registro40173 crear_registro40173(int id) {
    Registro40173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
