// fichero 29901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29901;

Registro29901 crear_registro29901(int id) {
    Registro29901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
