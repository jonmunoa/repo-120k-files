// fichero 34445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34445;

Registro34445 crear_registro34445(int id) {
    Registro34445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
