// fichero 49893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49893;

Registro49893 crear_registro49893(int id) {
    Registro49893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
