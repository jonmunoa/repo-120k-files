// fichero 28849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28849;

Registro28849 crear_registro28849(int id) {
    Registro28849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
