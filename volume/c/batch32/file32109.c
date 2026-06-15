// fichero 32109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32109;

Registro32109 crear_registro32109(int id) {
    Registro32109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
