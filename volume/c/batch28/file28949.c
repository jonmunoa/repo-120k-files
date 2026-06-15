// fichero 28949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28949;

Registro28949 crear_registro28949(int id) {
    Registro28949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
