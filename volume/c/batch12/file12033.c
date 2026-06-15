// fichero 12033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12033;

Registro12033 crear_registro12033(int id) {
    Registro12033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
