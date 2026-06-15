// fichero 49289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49289;

Registro49289 crear_registro49289(int id) {
    Registro49289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
