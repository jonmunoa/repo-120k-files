// fichero 8021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8021;

Registro8021 crear_registro8021(int id) {
    Registro8021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
