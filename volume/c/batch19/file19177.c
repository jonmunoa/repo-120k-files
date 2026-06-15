// fichero 19177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19177;

Registro19177 crear_registro19177(int id) {
    Registro19177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
