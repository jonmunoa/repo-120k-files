// fichero 34893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34893;

Registro34893 crear_registro34893(int id) {
    Registro34893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
