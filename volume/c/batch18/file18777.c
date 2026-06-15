// fichero 18777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18777;

Registro18777 crear_registro18777(int id) {
    Registro18777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
