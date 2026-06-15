// fichero 19489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19489;

Registro19489 crear_registro19489(int id) {
    Registro19489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
