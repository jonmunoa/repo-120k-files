// fichero 35893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35893;

Registro35893 crear_registro35893(int id) {
    Registro35893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
