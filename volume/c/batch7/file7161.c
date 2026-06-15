// fichero 7161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7161;

Registro7161 crear_registro7161(int id) {
    Registro7161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
