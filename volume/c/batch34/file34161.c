// fichero 34161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34161;

Registro34161 crear_registro34161(int id) {
    Registro34161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
