// fichero 26849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26849;

Registro26849 crear_registro26849(int id) {
    Registro26849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
