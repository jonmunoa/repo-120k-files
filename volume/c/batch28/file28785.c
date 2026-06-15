// fichero 28785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28785;

Registro28785 crear_registro28785(int id) {
    Registro28785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
