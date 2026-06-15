// fichero 49445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49445;

Registro49445 crear_registro49445(int id) {
    Registro49445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
