// fichero 12897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12897;

Registro12897 crear_registro12897(int id) {
    Registro12897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
