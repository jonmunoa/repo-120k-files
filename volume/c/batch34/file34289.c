// fichero 34289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34289;

Registro34289 crear_registro34289(int id) {
    Registro34289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
