// fichero 40161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40161;

Registro40161 crear_registro40161(int id) {
    Registro40161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
