// fichero 19777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19777;

Registro19777 crear_registro19777(int id) {
    Registro19777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
