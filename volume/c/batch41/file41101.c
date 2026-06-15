// fichero 41101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41101;

Registro41101 crear_registro41101(int id) {
    Registro41101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
